void fun()
{
  int entity_0 = 50;
  int entity_9 = 5;
  char entity_6[31] = "";
  entity_6 = NULL;
  char entity_3[21] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_3, 'E', 21-1);
  entity_3[21-1]='';
  memset(entity_6, 'I', 31-1);
  entity_6[31-1]='';
  strcpy(entity_7, entity_3);
}