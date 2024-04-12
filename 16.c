void fun()
{
  int entity_3 = 1;
  char entity_5[56] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'z', 56-1);
  entity_5[56-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_3 = 60;
  memcpy(entity_8, entity_5, 56*sizeof(char));
}