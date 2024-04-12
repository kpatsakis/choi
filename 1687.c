void fun()
{
  char entity_3[43] = "";
  entity_3 = NULL;
  char* entity_2;
  char* entity_6;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  entity_6 = (char*)malloc(61*sizeof(char));
  entity_6[61-1]='';
  memset(entity_3, 'i', 43-1);
  entity_3[43-1]='';
  memcpy(entity_6, entity_3, 43*sizeof(char));
}