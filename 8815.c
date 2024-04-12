void fun()
{
  int entity_2 = 4;
  entity_2 = 54;
  char* entity_8;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'V', entity_2-1);
  entity_7[entity_2-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  entity_7[12] = 'T';
}