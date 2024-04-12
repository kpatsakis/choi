void fun()
{
  int entity_1 = 82;
  char* entity_2;
  char* entity_7;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(0*sizeof(char));
  entity_7[0-1]='';
  memset(entity_4, 's', entity_1-1);
  entity_4[entity_1-1]='';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  strcpy(entity_2, entity_4);
}