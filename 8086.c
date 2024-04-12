void fun()
{
  int entity_2 = 5;
  char* entity_4;
  char entity_3[51] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_5;
  memset(entity_3, 'C', 51-1);
  entity_3[51-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  memcpy(entity_5, entity_3, 51*sizeof(char));
}