void fun()
{
  int entity_7 = 32;
  char* entity_2;
  char entity_9[9] = "";
  entity_9 = NULL;
  char entity_5 = 'I';
  char* entity_4;
  memset(entity_9, 'G', 9-1);
  entity_9[9-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  entity_7 = 80;
  memcpy(entity_2, entity_9, 9*sizeof(char));
}