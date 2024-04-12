void fun()
{
  int entity_6 = 44;
  char* entity_8;
  char entity_5[80] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_5, 'W', 80-1);
  entity_5[80-1]='';
  memcpy(entity_8, entity_5, 80*sizeof(char));
}