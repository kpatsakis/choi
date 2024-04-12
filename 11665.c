void fun()
{
  char* entity_9;
  char* entity_1;
  char entity_5[13] = "";
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 's', 13-1);
  entity_5[13-1]='0';
  strcpy(entity_9, entity_5);
}