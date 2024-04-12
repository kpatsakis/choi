void fun()
{
  int entity_5 = 72;
  int entity_4 = 25;
  char* entity_2;
  char* entity_0;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_1, 'O', 74-1);
  entity_1[74-1]='';
  memcpy(entity_0, entity_1, 74*sizeof(char));
}