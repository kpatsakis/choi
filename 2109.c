void fun()
{
  int entity_3 = 39;
  char entity_4[15] = "";
  entity_4 = NULL;
  char entity_2[2] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'F', 2-1);
  entity_2[2-1]='';
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[28-1]='';
  memset(entity_4, 'u', 15-1);
  entity_4[15-1]='';
  entity_4[entity_3] = 'O';
}