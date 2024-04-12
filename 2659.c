void fun()
{
  int entity_6 = 73;
  char entity_3[50] = "";
  entity_3 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_2;
  memset(entity_3, 'o', 50-1);
  entity_3[50-1]='';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[27-1]='';
  memset(entity_4, 's', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 53;
  memcpy(entity_2, entity_4, entity_6*sizeof(char));
}