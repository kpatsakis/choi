void fun()
{
  char entity_6[52] = "";
  entity_6 = NULL;
  char entity_2[100] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_6, 'N', 52-1);
  entity_6[52-1]='';
  memset(entity_2, 'p', 100-1);
  entity_2[100-1]='';
  entity_2[21] = 'h';
}