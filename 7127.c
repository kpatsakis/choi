void fun()
{
  int entity_7 = 98;
  entity_7 = 64;
  char* entity_4;
  char entity_1[27] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', 27-1);
  entity_1[27-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_1, 27*sizeof(char));
}