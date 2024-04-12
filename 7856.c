void fun()
{
  int entity_5 = 59;
  int entity_2 = 90;
  entity_2 = 90;
  char entity_6 = 'B';
  char entity_1[8] = "";
  entity_1 = NULL;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'p', entity_2-1);
  entity_9[entity_2-1]='';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_1, 'r', 8-1);
  entity_1[8-1]='';
  strcpy(entity_4, entity_9);
}