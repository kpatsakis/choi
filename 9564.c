void fun()
{
  int entity_2 = 85;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_8;
  char* entity_6;
  memset(entity_1, 'j', entity_2-1);
  entity_1[entity_2-1]='';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  strcpy(entity_8, entity_1);
}