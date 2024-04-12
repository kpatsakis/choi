void fun()
{
  char* entity_3;
  char entity_8[92] = "";
  entity_8 = NULL;
  char entity_7[88] = "";
  entity_7 = NULL;
  char entity_2[56] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[83-1]='';
  memset(entity_8, 'w', 92-1);
  entity_8[92-1]='';
  memset(entity_7, 'T', 88-1);
  entity_7[88-1]='';
  memset(entity_2, 'e', 56-1);
  entity_2[56-1]='';
  memcpy(entity_3, entity_8, 92*sizeof(char));
}