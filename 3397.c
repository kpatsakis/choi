void fun()
{
  int entity_5 = 60;
  entity_5 = 70;
  char* entity_9;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', entity_5-1);
  entity_7[entity_5-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  entity_7[7] = 'l';
}