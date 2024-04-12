void fun()
{
  char entity_2[90] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'D', 90-1);
  entity_2[90-1]='';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  entity_2[26] = 'M';
}