void fun()
{
  int entity_9 = 25;
  char entity_2 = 'X';
  char entity_1 = 'D';
  char entity_6[94] = "";
  entity_6 = NULL;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_6, 'j', 94-1);
  entity_6[94-1]='';
  memset(entity_7, 'H', 37-1);
  entity_7[37-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 40;
  strcpy(entity_0, entity_6);
}