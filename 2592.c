void fun()
{
  int entity_6 = 2;
  int entity_1 = 49;
  char* entity_8;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', entity_1-1);
  entity_7[entity_1-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  memcpy(entity_8, entity_7, entity_1*sizeof(char));
}