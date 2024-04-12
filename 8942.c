void fun()
{
  int entity_5 = 51;
  entity_5 = 50;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_7[70] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_2;
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[80-1]='';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[73-1]='';
  memset(entity_4, 'w', entity_5-1);
  entity_4[entity_5-1]='';
  memset(entity_7, 'a', 70-1);
  entity_7[70-1]='';
  memcpy(entity_9, entity_4, entity_5*sizeof(char));
}