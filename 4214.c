void fun()
{
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  memset(entity_3, 'e', 17-1);
  entity_3[17-1]='';
  memcpy(entity_2, entity_3, 17*sizeof(char));
}