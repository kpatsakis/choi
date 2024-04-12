void fun()
{
  int entity_7 = 65;
  char entity_6 = 'X';
  char* entity_2;
  char* entity_4;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memset(entity_8, 'P', entity_7-1);
  entity_8[entity_7-1]='';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}