void fun()
{
  int entity_7 = 32;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_5[68] = "";
  entity_5 = NULL;
  memset(entity_5, 'N', 68-1);
  entity_5[68-1]='';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  memset(entity_6, 'M', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 47;
  entity_6[13] = 'N';
}