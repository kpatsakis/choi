void fun()
{
  char entity_8[68] = "";
  entity_8 = NULL;
  char entity_3[38] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  memset(entity_8, 's', 68-1);
  entity_8[68-1]='';
  memset(entity_3, 'P', 38-1);
  entity_3[38-1]='';
  strcpy(entity_2, entity_3);
}