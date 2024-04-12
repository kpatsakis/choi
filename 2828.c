void fun()
{
  int entity_0 = 93;
  char* entity_6;
  char* entity_2;
  char* entity_7;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'F', entity_0-1);
  entity_3[entity_0-1]='';
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[45-1]='';
  strcpy(entity_7, entity_3);
}