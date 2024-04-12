void fun()
{
  int entity_1 = 70;
  char entity_8[10] = "";
  entity_8 = NULL;
  char entity_2 = 'e';
  char* entity_3;
  memset(entity_8, 'V', 10-1);
  entity_8[10-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_1 = 63;
  strcpy(entity_3, entity_8);
}