void fun()
{
  int entity_0 = 35;
  int entity_2 = 98;
  entity_2 = 98;
  char* entity_7;
  char entity_9[82] = "";
  entity_9 = NULL;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_8 = 'm';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[80-1]='';
  memset(entity_5, 'r', entity_2-1);
  entity_5[entity_2-1]='';
  memset(entity_9, 'Y', 82-1);
  entity_9[82-1]='';
  strcpy(entity_7, entity_5);
}