void fun()
{
  int entity_4 = 2;
  int entity_2 = 99;
  entity_4 = 58;
  char entity_8[28] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'p', 28-1);
  entity_8[28-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memcpy(entity_7, entity_8, 28*sizeof(char));
}