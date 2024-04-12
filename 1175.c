void fun()
{
  char entity_8[41] = "";
  entity_8 = NULL;
  char entity_3[42] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_8, 'R', 41-1);
  entity_8[41-1]='';
  memset(entity_3, 'y', 42-1);
  entity_3[42-1]='';
  entity_7 = (char*)malloc(25*sizeof(char));
  entity_7[25-1]='';
  memcpy(entity_7, entity_8, 41*sizeof(char));
}