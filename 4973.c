void fun()
{
  int entity_5 = 93;
  int entity_2 = 1;
  entity_2 = 95;
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'R', 10-1);
  entity_7[10-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_7, 10*sizeof(char));
}