void fun()
{
  char* entity_2;
  char entity_3[82] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', 82-1);
  entity_3[82-1]='';
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[57-1]='';
  strcpy(entity_2, entity_3);
}