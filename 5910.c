void fun()
{
  int entity_4 = 63;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_7[34] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  memset(entity_7, 'h', 34-1);
  entity_7[34-1]='';
  memset(entity_8, 'r', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[11] = 'k';
}