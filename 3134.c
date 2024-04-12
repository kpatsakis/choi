void fun()
{
  int entity_1 = 20;
  char* entity_7;
  char entity_8[1] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 1-1);
  entity_8[1-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memcpy(entity_7, entity_8, 1*sizeof(char));
}