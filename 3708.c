void fun()
{
  char* entity_6;
  char entity_3[10] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 10-1);
  entity_3[10-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  entity_3[78] = 'm';
}