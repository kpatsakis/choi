void fun()
{
  int entity_7 = 76;
  entity_7 = 78;
  char* entity_3;
  char* entity_4;
  char entity_9[50] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_9, 'C', 50-1);
  entity_9[50-1]='';
  memcpy(entity_3, entity_9, 50*sizeof(char));
}