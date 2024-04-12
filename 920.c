void fun()
{
  int entity_1 = 23;
  char* entity_9;
  char* entity_4;
  char entity_7[62] = "";
  entity_7 = NULL;
  char entity_3 = 'i';
  char* entity_2;
  memset(entity_7, 'f', 62-1);
  entity_7[62-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[89-1]='';
  entity_1 = 49;
  strcpy(entity_9, entity_7);
}