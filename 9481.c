void fun()
{
  int entity_0 = 51;
  char* entity_9;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_7[57] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memset(entity_5, 'O', entity_0-1);
  entity_5[entity_0-1]='';
  memset(entity_7, 'D', 57-1);
  entity_7[57-1]='';
  entity_0 = 15;
  strcpy(entity_2, entity_5);
}