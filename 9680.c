void fun()
{
  int entity_7 = 100;
  int entity_6 = 16;
  int entity_1 = 3;
  char entity_5[10] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_3 = 'R';
  memset(entity_5, 'd', 10-1);
  entity_5[10-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  entity_7 = 82;
  strcpy(entity_9, entity_5);
}