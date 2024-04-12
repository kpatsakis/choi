void fun()
{
  int entity_6 = 3;
  int entity_9 = 15;
  char* entity_7;
  char* entity_1;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', entity_6-1);
  entity_4[entity_6-1]='';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  strcpy(entity_7, entity_4);
}