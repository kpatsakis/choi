void fun()
{
  int entity_6 = 28;
  char entity_8[27] = "";
  entity_8 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_2;
  char* entity_3;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[23-1]='';
  memset(entity_4, 'u', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_8, 'X', 27-1);
  entity_8[27-1]='';
  memcpy(entity_2, entity_4, entity_6*sizeof(char));
}