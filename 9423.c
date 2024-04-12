void fun()
{
  int entity_1 = 2;
  char entity_7[90] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_7, 'L', 90-1);
  entity_7[90-1]='';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  memset(entity_2, 'S', entity_1-1);
  entity_2[entity_1-1]='';
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[91-1]='';
  entity_1 = 48;
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}