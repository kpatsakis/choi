void fun()
{
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_3, 'o', 92-1);
  entity_3[92-1]='';
  strcpy(entity_0, entity_3);
}