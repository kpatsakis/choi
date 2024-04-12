void fun()
{
  int entity_9 = 97;
  int entity_4 = 55;
  char* entity_5;
  char* entity_7;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'k', entity_9-1);
  entity_3[entity_9-1]='';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  entity_9 = 59;
  entity_3[51] = 'B';
}