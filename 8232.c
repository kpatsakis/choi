void fun()
{
  int entity_7 = 96;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memset(entity_9, 'F', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 94;
  entity_9[2] = 'D';
}