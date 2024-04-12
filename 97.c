void fun()
{
  int entity_9 = 57;
  char entity_7 = 'R';
  char* entity_3;
  char entity_5 = 'X';
  char* entity_8;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', entity_9-1);
  entity_2[entity_9-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memcpy(entity_3, entity_2, entity_9*sizeof(char));
}