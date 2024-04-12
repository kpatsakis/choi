void fun()
{
  char entity_1 = 'l';
  char entity_2[92] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(72*sizeof(char));
  entity_3[72-1]='';
  memset(entity_2, 'f', 92-1);
  entity_2[92-1]='';
  strcpy(entity_3, entity_2);
}