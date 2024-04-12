void fun()
{
  int entity_7 = 75;
  entity_7 = 53;
  char entity_1 = 'E';
  char entity_4[33] = "";
  entity_4 = NULL;
  char entity_2[13] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'R', 13-1);
  entity_2[13-1]='';
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[68-1]='';
  memset(entity_4, 'z', 33-1);
  entity_4[33-1]='';
  entity_4[entity_7] = 'D';
}