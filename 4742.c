void fun()
{
  int entity_1 = 23;
  int entity_7 = 1;
  char* entity_8;
  char entity_3[27] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', 27-1);
  entity_3[27-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_3, 27*sizeof(char));
}