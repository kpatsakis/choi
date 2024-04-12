void fun()
{
  int entity_6 = 49;
  char entity_9 = 'Z';
  char* entity_2;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'T', entity_6-1);
  entity_1[entity_6-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  entity_1[100] = 'P';
}