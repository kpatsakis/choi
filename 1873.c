void fun()
{
  int entity_1 = 6;
  int entity_4 = 25;
  char entity_9[35] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_6, 'e', entity_4-1);
  entity_6[entity_4-1]='';
  memset(entity_9, 'G', 35-1);
  entity_9[35-1]='';
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  strcpy(entity_3, entity_6);
}