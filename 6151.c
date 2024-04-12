void fun()
{
  char entity_6 = 'w';
  char entity_1 = 'C';
  char entity_3[92] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'j', 92-1);
  entity_3[92-1]='';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[35-1]='';
  strcpy(entity_7, entity_3);
}