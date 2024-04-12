void fun()
{
  int entity_4 = 82;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_2;
  char* entity_5;
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memset(entity_9, 'Z', entity_4-1);
  entity_9[entity_4-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[85-1]='';
  strcpy(entity_5, entity_9);
}